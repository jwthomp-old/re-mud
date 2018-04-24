type player = {
    id: int,
    name: string
};

let load = (id, name) => {
    {
        id: id,
        name: name
    }
};

let display = (player) => {
    Js.log("id: " ++ string_of_int(player.id));
    Js.log("name: " ++ player.name);
};