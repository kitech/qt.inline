//  header block begin

// /usr/include/qt/QtWidgets/qtooltip.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtooltip.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolTip is pure virtual: false
// QToolTip has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQToolTip_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQToolTip_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQToolTip_t qt_meta_stringdata_MyQToolTip = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQToolTip"
  },
  "MyQToolTip"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQToolTip[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQToolTip : public QToolTip {
public:
  virtual ~MyQToolTip() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:56
// [-2] void showText(const QPoint &, const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidget(QPoint* pos, QString* text, QWidget * w) {
  QToolTip::showText(*pos, *text, w);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:57
// [-2] void showText(const QPoint &, const QString &, QWidget *, const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRect(QPoint* pos, QString* text, QWidget * w, QRect* rect) {
  QToolTip::showText(*pos, *text, w, *rect);
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtooltip.h:58
// [-2] void showText(const QPoint &, const QString &, QWidget *, const QRect &, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRecti(QPoint* pos, QString* text, QWidget * w, QRect* rect, int msecShowTime) {
  QToolTip::showText(*pos, *text, w, *rect, msecShowTime);
}
#endif // QT_VERSION >= 0x050200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtooltip.h:59
// [-2] void hideText()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip8hideTextEv() {
  QToolTip::hideText();
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtooltip.h:61
// [1] bool isVisible()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZN8QToolTip9isVisibleEv() {
  return (bool)QToolTip::isVisible();
}
#endif // QT_VERSION >= 0x040400

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtooltip.h:62
// [8] QString text()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolTip4textEv() {
  auto rv = QToolTip::text();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:64
// [16] QPalette palette()
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolTip7paletteEv() {
  auto rv = QToolTip::palette();
return new QPalette(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtooltip.h:65
// [-2] void setPalette(const QPalette &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip10setPaletteERK8QPalette(QPalette* arg0) {
  QToolTip::setPalette(*arg0);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtooltip.h:66
// [16] QFont font()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolTip4fontEv() {
  auto rv = QToolTip::font();
return new QFont(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtooltip.h:67
// [-2] void setFont(const QFont &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QToolTip7setFontERK5QFont(QFont* arg0) {
  QToolTip::setFont(*arg0);
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN8QToolTipD2Ev(void *this_) {
  delete (QToolTip*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
