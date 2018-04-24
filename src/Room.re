type room = {
    id: int,
    name: string,
    players: list(Player.player)
};




let g_id = ref(0);

let load = (name) => {
    let id = g_id^;
    g_id := g_id^ + 1;
    {
        id: id,
        name: name,
        players: []
    };
};

let display = (room) => {
    Js.log("id: " ++ string_of_int(room.id));
    Js.log("Name: " ++ room.name);
    Js.log("Players: ");
    List.iter(Player.display, room.players);
}

/*
let player_enter = (player_id, room_id) => {

}
*/