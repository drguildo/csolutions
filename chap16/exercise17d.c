enum Piece {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

enum Color {
    BLACK,
    WHITE
};

struct Square {
    enum Piece p;
    enum Color c;
};

struct Square board[8][8] = {
    {
        {ROOK, BLACK},
        {KNIGHT, BLACK},
        {BISHOP, BLACK},
        {KING, BLACK},
        {QUEEN, BLACK},
        {BISHOP, BLACK},
        {KNIGHT, BLACK},
        {ROOK, BLACK}
    },
    {
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK},
        {PAWN, BLACK}
    },
    {
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK}
    },
    {
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK},
        {EMPTY, BLACK}
    },
    {
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE}
    },
    {
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE},
        {EMPTY, WHITE}
    },
    {
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE},
        {PAWN, WHITE}
    },
    {
        {ROOK, WHITE},
        {KNIGHT, WHITE},
        {BISHOP, WHITE},
        {KING, WHITE},
        {QUEEN, WHITE},
        {BISHOP, WHITE},
        {KNIGHT, WHITE},
        {ROOK, WHITE}
    }
};

int main(void) {
    return 0;
}
