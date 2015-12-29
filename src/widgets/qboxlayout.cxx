// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qboxlayout.h
// dst-file: /src/widgets/qboxlayout.cxx
//

// header block begin =>
#include <qboxlayout.h>

extern "C" {

int QHBoxLayout_Class_Size()
{
  return sizeof(QHBoxLayout);
}

// QHBoxLayout(class QWidget *)
QHBoxLayout* dector_ZN11QHBoxLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QHBoxLayout) == 32, "tyszerr");
  QHBoxLayout* rthis = new QHBoxLayout(parent);
  return rthis;
}

// ~QHBoxLayout()
void dedtor_ZN11QHBoxLayoutD0Ev(QHBoxLayout* that)
{
  QHBoxLayout* rthis = (QHBoxLayout*)that;
  delete rthis;
}

// QHBoxLayout()
QHBoxLayout* dector_ZN11QHBoxLayoutC1Ev()
{
  // static_assert(sizeof(QHBoxLayout) == 32, "tyszerr");
  QHBoxLayout* rthis = new QHBoxLayout();
  return rthis;
}

int QBoxLayout_Class_Size()
{
  return sizeof(QBoxLayout);
}

// ~QBoxLayout()
void dedtor_ZN10QBoxLayoutD0Ev(QBoxLayout* that)
{
  QBoxLayout* rthis = (QBoxLayout*)that;
  delete rthis;
}

// QBoxLayout(enum QBoxLayout::Direction, class QWidget *)
QBoxLayout* dector_ZN10QBoxLayoutC1ENS_9DirectionEP7QWidget(QBoxLayout::Direction arg1, QWidget * parent)
{
  // static_assert(sizeof(QBoxLayout) == 32, "tyszerr");
  QBoxLayout* rthis = new QBoxLayout(arg1, parent);
  return rthis;
}

int QVBoxLayout_Class_Size()
{
  return sizeof(QVBoxLayout);
}

// QVBoxLayout()
QVBoxLayout* dector_ZN11QVBoxLayoutC1Ev()
{
  // static_assert(sizeof(QVBoxLayout) == 32, "tyszerr");
  QVBoxLayout* rthis = new QVBoxLayout();
  return rthis;
}

// QVBoxLayout(class QWidget *)
QVBoxLayout* dector_ZN11QVBoxLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QVBoxLayout) == 32, "tyszerr");
  QVBoxLayout* rthis = new QVBoxLayout(parent);
  return rthis;
}

// ~QVBoxLayout()
void dedtor_ZN11QVBoxLayoutD0Ev(QVBoxLayout* that)
{
  QVBoxLayout* rthis = (QVBoxLayout*)that;
  delete rthis;
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
// QHBoxLayout_SlotProxy here
class QHBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QHBoxLayout_SlotProxy* QHBoxLayout_SlotProxy_new()
  {
    return new QHBoxLayout_SlotProxy();
  }
};

// QBoxLayout_SlotProxy here
class QBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QBoxLayout_SlotProxy* QBoxLayout_SlotProxy_new()
  {
    return new QBoxLayout_SlotProxy();
  }
};

// QVBoxLayout_SlotProxy here
class QVBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QVBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qboxlayout.moc"

extern "C" {
  QVBoxLayout_SlotProxy* QVBoxLayout_SlotProxy_new()
  {
    return new QVBoxLayout_SlotProxy();
  }
};

// <= body block end

