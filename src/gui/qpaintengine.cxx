// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qpaintengine.h
// dst-file: /src/gui/qpaintengine.cxx
//

// header block begin =>
#include <qpaintengine.h>

extern "C" {

int QTextItem_Class_Size()
{
  return sizeof(QTextItem);
}

int QPaintEngineState_Class_Size()
{
  return sizeof(QPaintEngineState);
}

int QPaintEngine_Class_Size()
{
  return sizeof(QPaintEngine);
}

  // proto:  void QPaintEngine::clearDirty(DirtyFlags df);
void demth_ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->clearDirty(df);
}

  // proto:  bool QPaintEngine::isActive();
bool demth_ZNK12QPaintEngine8isActiveEv(void *that)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
  return cthat->isActive();
}

  // proto:  bool QPaintEngine::hasFeature(PaintEngineFeatures feature);
bool demth_ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE(void *that, QPaintEngine::PaintEngineFeature feature)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
  return cthat->hasFeature(feature);
}

  // proto:  void QPaintEngine::setActive(bool newState);
void demth_ZN12QPaintEngine9setActiveEb(void *that, bool newState)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->setActive(newState);
}

  // proto:  bool QPaintEngine::testDirty(DirtyFlags df);
bool demth_ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
  return cthat->testDirty(df);
}

  // proto:  void QPaintEngine::setDirty(DirtyFlags df);
void demth_ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE(void *that, QPaintEngine::DirtyFlag df)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->setDirty(df);
}

  // proto:  void QPaintEngine::fix_neg_rect(int * x, int * y, int * w, int * h);
void demth_ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_(void *that, int * x, int * y, int * w, int * h)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
   cthat->fix_neg_rect(x, y, w, h);
}

  // proto:  bool QPaintEngine::isExtended();
bool demth_ZNK12QPaintEngine10isExtendedEv(void *that)
{
  QPaintEngine *cthat = (QPaintEngine *)that;
  return cthat->isExtended();
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

