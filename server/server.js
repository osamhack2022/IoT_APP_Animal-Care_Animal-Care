const express = require("express");
const http = require("http");
const socket_io = require("socket.io");

const app = express();

app.get('/', (req, res) => {
    res.sendFile(__dirname + "/index.html");
});

const server = http.createServer(app);

const socket_app = express();
const socket_server = http.createServer(socket_app);

const io = socket_io(socket_server);
// socket을 통해 연결이 들어오면 실행되는 이벤트
io.on("connection", (socket) => {
    //socket.emit -> 신호 발신

    //socket.on -> 신호 수신
    socket.on("connection", (msg) => {
        console.log(msg);
        socket.emit("Server Received your data!");
    });
});


socket_server.listen(65535, () => {
    console.log("socket is listening on IP:65535");
});


server.listen(8080, () => {
    console.log("Server is listening on IP:8080");

});

