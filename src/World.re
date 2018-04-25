type world = {
    id: int,
    rooms: Immutable.List.t(Room.t)
};

type t = world;

let load = (id:int) => {
    {
        id: id,
        rooms: Immutable.List.empty()
    }
};


let display = (world) => {
    Js.log("World id: " ++ string_of_int(world.id));
    Js.log("Rooms:");
    Immutable.List.forEach(Room.display, world.rooms)
};


let add_room = (world, room) => {
    {
        id: world.id,
        rooms: Immutable.List.addFirst(room, world.rooms)
    }
};

