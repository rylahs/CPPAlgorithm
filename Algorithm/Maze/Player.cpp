#include "pch.h"
#include "Player.h"
#include "Board.h"

void Player::Init(Board* board)
{
	_pos = board->GentEnterPos();
	_board = board;
}

void Player::Update(uint64 deltaTick)
{
}
