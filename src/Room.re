
type room = {
    id: int,
    name: string,
    players: Immutable.List.t(Player.t)
};

type t = room;


let g_id = ref(0);


let load = (name) => {
    let id = g_id^;
    g_id := g_id^ + 1;
    {
        id: id,
        name: name,
        players: Immutable.List.empty()
    };
};


let display = (room) => {
    Js.log("id: " ++ string_of_int(room.id));
    Js.log("Name: " ++ room.name);
    Js.log("Players: ");
    Immutable.List.forEach(Player.display, room.players);
};

/*
let player_enter = (player_id, room_id) => {
    
}
*/