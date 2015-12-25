// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qpaintengine.h
// dst-file: /src/gui/qpaintengine.cxx
//

// header block begin =>
#include <qpaintengine.h>

extern "C" {

  // proto:  void QPaintEngine::clearDirty(DirtyFlags df);
void _ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->clearDirty(df);
}

  // proto:  bool QPaintEngine::testDirty(DirtyFlags df);
bool _ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
  return cthat->testDirty(df);
}

  // proto:  void QPaintEngine::setDirty(DirtyFlags df);
void _ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->setDirty(df);
}

  // proto:  void QPaintEngine::fix_neg_rect(int * x, int * y, int * w, int * h);
void _ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_(void *that, int * x, int * y, int * w, int * h)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->fix_neg_rect(x, y, w, h);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

