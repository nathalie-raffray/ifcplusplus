#ifndef SOANY_THUMBWHEEL_H
#define SOANY_THUMBWHEEL_H

// src\Inventor\Win\widgets\SoAnyThumbWheel.h.  Generated from SoAnyThumbWheel.h.in by configure.

/**************************************************************************\
 * Copyright (c) Kongsberg Oil & Gas Technologies AS
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\**************************************************************************/

class SoAnyThumbWheel {
public:
  enum State              { DISABLED, ENABLED };
  enum Alignment          { VERTICAL, HORIZONTAL };
  enum BoundaryHandling   { MODULATE, ACCUMULATE, CLAMP };
  enum Movement           { UNIFORM, AUTHENTIC };
  enum GraphicsByteOrder  { ABGR, RGBA, ARGB, BGRA };

  SoAnyThumbWheel(void);
  ~SoAnyThumbWheel(void);

  void setSize(const int diameter, const int width);
  void getSize(int & diameter, int & width) const;

  void setColor(const float red, const float green, const float blue);
  void getColor(float & red, float & green, float & blue) const;
  void setColorFactors(const float light, const float front, const float normal, const float shade);
  void getColorFactors(float & light, float & front, float & normal, float & shade) const;

  int getNumBitmaps(void) const;
  void drawBitmap(const int number, void * bitmap, Alignment alignment) const;
  float calculateValue(const float origValue, const int origPosition, const int deltaPosition) const;
  int getBitmapForValue(const float value, const State state) const;

  void setGraphicsByteOrder(const GraphicsByteOrder byteorder);
  GraphicsByteOrder getGraphicsByteOrder(void) const;

  void setMovement(const Movement movement);
  Movement getMovement(void) const;

  void setBoundaryHandling(const BoundaryHandling handling);
  BoundaryHandling getBoundaryHandling(void) const;

private:
  unsigned int swapWord(unsigned int) const;

  int diameter, width;
  // float disabledred, disabledgreen, disabledblue; // not implemented
  float red, green, blue;
  float light, front, normal, shade;

  GraphicsByteOrder  byteorder;
  BoundaryHandling   boundaryhandling;
  Movement           movement;

  enum Tables { SIN, COS, RAD, NUMTABLES };

  mutable float * tables [ NUMTABLES ];
  mutable int dirtyTables;
  mutable int dirtyVariables;
  mutable float squarelength, squarespacing, shadelength, unistep, numsquares;

  void drawDisabledWheel(const int number, void * bitmap, Alignment alignment) const;
  void drawEnabledWheel(const int number, void * bitmap, Alignment alignment) const;

  void validate(void) const;

}; // class SoAnyThumbWheel

// ************************************************************************

#endif // ! SOANY_THUMBWHEEL_H
