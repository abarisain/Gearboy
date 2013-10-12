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
#include "Memory.h"
#include "Processor.h"

GameLink::GameLink(Memory* pMemory, Processor* pProcessor)
{
    m_pMemory = pMemory;
    m_pProcessor = pProcessor;
    m_Connected = false;
}

void GameLink::Init()
{
}

void GameLink::Receive(u8 value)
{
    m_pMemory->Write(0xFF02, SetBit(m_pMemory->Retrieve(0xFF02), 0x7F));
    m_pMemory->Load(0xFF01, value);
    m_pProcessor->RequestInterrupt(Processor::Serial_Interrupt);
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