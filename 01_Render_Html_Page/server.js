const express = require("express");
const path = require("path");
const app = express();

// Public folder ko static bana
app.use(express.static(path.join(__dirname, "public")));

// Home route
app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "public", "index.html"));
});

app.listen(3000, () => {
    console.log("Server chal raha: http://localhost:3000");
});
