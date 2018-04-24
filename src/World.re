type world = {
    id: int,
    rooms: list(Room.room)
};

let load = (id) => {
    {
        id: id,
        rooms: []
    }
};

let display = (world) => {
    Js.log("World id: " ++ string_of_int(world.id));
    Js.log("Rooms:");
    List.iter(Room.display, world.rooms)
};

let add_room = (world, room) => {
    {
        id: world.id,
        rooms: List.append(world.rooms, [room])
    }
};

