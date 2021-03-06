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

#ifndef GAMELINK_H
#define	GAMELINK_H

#include "definitions.h"

class Memory;
class Processor;

class GameLink
{
public:
    GameLink(Memory* pMemory, Processor* pProcessor);
    void Init();
    void Receive(u8 value);
    void Send(u8 value);
    bool IsConnected();
    void SetConnected(bool value);
    void SetSendImplementation(void (*implementation)(u8));

private:
    void Update();

private:
    bool m_Connected;
    Memory* m_pMemory;
    Processor* m_pProcessor;
    void (*m_pSendImpl)(u8);
};

#endif	/* GAMELINK_H */

