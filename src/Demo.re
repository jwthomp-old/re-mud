Js.log("Hello, BuckleScript and Reason!");

let w = World.load(0);
let r = Room.load("entry");

let w = World.add_room(w, r);


let p = Player.load(0, "Mythrandir");


World.display(w);

let l = Immutable.List.addFirst(1, []);
Js.log(">>>");
Immutable.List.forEach(~while_=(_i) => true, (i) => Js.log(i), l);


