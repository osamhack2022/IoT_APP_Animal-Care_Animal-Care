const express = require("express");
const http = require("http");
const app = express();
const server = http.createServer(app);
const {Server} = require("socket.io")
const io = new Server(server);

app.get('/', (req, res) => {
    res.sendFile(__dirname + "/index.html");
});

io.on("connection", (socket) => {
    socket.on("data", (data) => {
        console.log(data)
    });
});

server.listen(8080, () => {
    console.log("Server is listening on IP:8080")
});

