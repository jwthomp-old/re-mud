Js.log("Hello, BuckleScript and Reason!");

let a: Room.room = {
    id: 1,
    name: "foo",
    players: []
};

let w = World.load(0);
let r = Room.load("entry");

let w = World.add_room(w, r);

World.display(w);

