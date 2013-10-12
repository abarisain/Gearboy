/*
 * Gearboy - Nintendo Game Boy Emulator
 * Copyright (C) 2012-2013  Ignacio Sanchez, Arnaud Barisain-Monrose

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#include "GameLink.h"
#include "Processor.h"

GameLink::GameLink(Processor* pProcessor)
{
    m_pProcessor = pProcessor;
    m_Connected = false;
}

void GameLink::Send(u8 value)
{
    // Temporary stub
}

bool GameLink::IsConnected()
{
    return m_Connected;
}

void GameLink::SetConnected(bool value)
{
    m_Connected = value;
}