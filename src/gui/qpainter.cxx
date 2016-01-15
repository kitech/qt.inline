#include <qrect.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qpainter.h
// dst-file: /src/gui/qpainter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qpainter.h>

extern "C" {

int QPainter_Class_Size()
{
  return sizeof(QPainter);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qpainter_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 436, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::GlobalColor c);
if (false) {
  auto f = [](const QRect & arg1, Qt::GlobalColor arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
  };
}
// _ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE fillRect(const class QRect &, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 432, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QColor & color);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, const QColor & arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter8fillRectEiiiiRK6QColor fillRect(int, int, int, int, const class QColor &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 407, column 17>
//   // proto:  void QPainter::drawText(int x, int y, const QString & s);
if (false) {
  auto f = [](int arg1, int arg2, const QString & arg3) {
    ((QPainter*)0)->drawText(arg1, arg2, arg3);
  };
}
// _ZN8QPainter8drawTextEiiRK7QString drawText(int, int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 387, column 17>
//   // proto:  void QPainter::drawImage(const QRectF & r, const QImage & image);
if (false) {
  auto f = [](const QRectF & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
  };
}
// _ZN8QPainter9drawImageERK6QRectFRK6QImage drawImage(const class QRectF &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 383, column 17>
//   // proto:  void QPainter::drawImage(const QPointF & p, const QImage & image, const QRectF & sr, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](const QPointF & arg1, const QImage & arg2, const QRectF & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPointF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 439, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::BrushStyle style);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, Qt::BrushStyle arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE fillRect(int, int, int, int, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 306, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRect> & rectangles);
if (false) {
  auto f = [](const QVector<QRect> & arg1) {
    ((QPainter*)0)->drawRects(arg1);
  };
}
// _ZN8QPainter9drawRectsERK7QVectorI5QRectE drawRects(const QVector<class QRect> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 340, column 17>
//   // proto:  void QPainter::drawChord(const QRect & , int a, int alen);
if (false) {
  auto f = [](const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawChord(arg1, arg2, arg3);
  };
}
// _ZN8QPainter9drawChordERK5QRectii drawChord(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 256, column 17>
//   // proto:  void QPainter::translate(const QPoint & offset);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QPainter*)0)->translate(arg1);
  };
}
// _ZN8QPainter9translateERK6QPoint translate(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 195, column 17>
//   // proto:  void QPainter::setBrushOrigin(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QPainter*)0)->setBrushOrigin(arg1, arg2);
  };
}
// _ZN8QPainter14setBrushOriginEii setBrushOrigin(int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 313, column 17>
//   // proto:  void QPainter::drawEllipse(const QPoint & center, int rx, int ry);
if (false) {
  auto f = [](const QPoint & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3);
  };
}
// _ZN8QPainter11drawEllipseERK6QPointii drawEllipse(const class QPoint &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 332, column 17>
//   // proto:  void QPainter::drawArc(int x, int y, int w, int h, int a, int alen);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawArc(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN8QPainter7drawArcEiiiiii drawArc(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 316, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygonF & polyline);
if (false) {
  auto f = [](const QPolygonF & arg1) {
    ((QPainter*)0)->drawPolyline(arg1);
  };
}
// _ZN8QPainter12drawPolylineERK9QPolygonF drawPolyline(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 403, column 17>
//   // proto:  void QPainter::drawStaticText(int left, int top, const QStaticText & staticText);
if (false) {
  auto f = [](int arg1, int arg2, const QStaticText & arg3) {
    ((QPainter*)0)->drawStaticText(arg1, arg2, arg3);
  };
}
// _ZN8QPainter14drawStaticTextEiiRK11QStaticText drawStaticText(int, int, const class QStaticText &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 366, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh);
if (false) {
  auto f = [](int arg1, int arg2, const QPixmap & arg3, int arg4, int arg5, int arg6, int arg7) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN8QPainter10drawPixmapEiiRK7QPixmapiiii drawPixmap(int, int, const class QPixmap &, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 372, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm);
if (false) {
  auto f = [](int arg1, int arg2, const QPixmap & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
  };
}
// _ZN8QPainter10drawPixmapEiiRK7QPixmap drawPixmap(int, int, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 318, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygon & polygon);
if (false) {
  auto f = [](const QPolygon & arg1) {
    ((QPainter*)0)->drawPolyline(arg1);
  };
}
// _ZN8QPainter12drawPolylineERK8QPolygon drawPolyline(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 355, column 17>
//   // proto:  void QPainter::drawTiledPixmap(const QRect & , const QPixmap & , const QPoint & );
if (false) {
  auto f = [](const QRect & arg1, const QPixmap & arg2, const QPoint & arg3) {
    ((QPainter*)0)->drawTiledPixmap(arg1, arg2, arg3);
  };
}
// _ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint drawTiledPixmap(const class QRect &, const class QPixmap &, const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 339, column 17>
//   // proto:  void QPainter::drawChord(int x, int y, int w, int h, int a, int alen);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawChord(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN8QPainter9drawChordEiiiiii drawChord(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 374, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmap drawPixmap(int, int, int, int, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 419, column 18>
//   // proto:  QRect QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString & text);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, const QString & arg6) {
    ((QPainter*)0)->boundingRect(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN8QPainter12boundingRectEiiiiiRK7QString boundingRect(int, int, int, int, int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 335, column 17>
//   // proto:  void QPainter::drawPie(int x, int y, int w, int h, int a, int alen);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawPie(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN8QPainter7drawPieEiiiiii drawPie(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 369, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr);
if (false) {
  auto f = [](const QPoint & arg1, const QPixmap & arg2, const QRect & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
  };
}
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect drawPixmap(const class QPoint &, const class QPixmap &, const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 381, column 17>
//   // proto:  void QPainter::drawImage(const QRect & targetRect, const QImage & image, const QRect & sourceRect, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](const QRect & arg1, const QImage & arg2, const QRect & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QRect &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 282, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygon & points);
if (false) {
  auto f = [](const QPolygon & arg1) {
    ((QPainter*)0)->drawPoints(arg1);
  };
}
// _ZN8QPainter10drawPointsERK8QPolygon drawPoints(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 304, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRectF> & rectangles);
if (false) {
  auto f = [](const QVector<QRectF> & arg1) {
    ((QPainter*)0)->drawRects(arg1);
  };
}
// _ZN8QPainter9drawRectsERK7QVectorI6QRectFE drawRects(const QVector<class QRectF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 391, column 17>
//   // proto:  void QPainter::drawImage(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](int arg1, int arg2, const QImage & arg3, int arg4, int arg5, int arg6, int arg7, Qt::ImageConversionFlags arg8) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
}
// _ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE drawImage(int, int, const class QImage &, int, int, int, int, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 359, column 17>
//   // proto:  void QPainter::drawPicture(const QPoint & p, const QPicture & picture);
if (false) {
  auto f = [](const QPoint & arg1, const QPicture & arg2) {
    ((QPainter*)0)->drawPicture(arg1, arg2);
  };
}
// _ZN8QPainter11drawPictureERK6QPointRK8QPicture drawPicture(const class QPoint &, const class QPicture &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 441, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::BrushStyle style);
if (false) {
  auto f = [](const QRectF & arg1, Qt::BrushStyle arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
  };
}
// _ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE fillRect(const class QRectF &, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 437, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::GlobalColor c);
if (false) {
  auto f = [](const QRectF & arg1, Qt::GlobalColor arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
  };
}
// _ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE fillRect(const class QRectF &, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 295, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLine> & lines);
if (false) {
  auto f = [](const QVector<QLine> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
  };
}
// _ZN8QPainter9drawLinesERK7QVectorI5QLineE drawLines(const QVector<class QLine> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 300, column 17>
//   // proto:  void QPainter::drawRect(int x1, int y1, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter8drawRectEiiii drawRect(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 299, column 17>
//   // proto:  void QPainter::drawRect(const QRectF & rect);
if (false) {
  auto f = [](const QRectF & arg1) {
    ((QPainter*)0)->drawRect(arg1);
  };
}
// _ZN8QPainter8drawRectERK6QRectF drawRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 450, column 17>
//   // proto:  bool QPainter::testRenderHint(QPainter::RenderHint hint);
if (false) {
  auto f = [](QPainter::RenderHint arg1) {
    ((QPainter*)0)->testRenderHint(arg1);
  };
}
// _ZNK8QPainter14testRenderHintENS_10RenderHintE testRenderHint(enum QPainter::RenderHint)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 284, column 17>
//   // proto:  void QPainter::drawLine(const QLineF & line);
if (false) {
  auto f = [](const QLineF & arg1) {
    ((QPainter*)0)->drawLine(arg1);
  };
}
// _ZN8QPainter8drawLineERK6QLineF drawLine(const class QLineF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 288, column 17>
//   // proto:  void QPainter::drawLine(const QPointF & p1, const QPointF & p2);
if (false) {
  auto f = [](const QPointF & arg1, const QPointF & arg2) {
    ((QPainter*)0)->drawLine(arg1, arg2);
  };
}
// _ZN8QPainter8drawLineERK7QPointFS2_ drawLine(const class QPointF &, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 373, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & r, const QPixmap & pm);
if (false) {
  auto f = [](const QRect & arg1, const QPixmap & arg2) {
    ((QPainter*)0)->drawPixmap(arg1, arg2);
  };
}
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmap drawPixmap(const class QRect &, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 354, column 17>
//   // proto:  void QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & , int sx, int sy);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5, int arg6, int arg7) {
    ((QPainter*)0)->drawTiledPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii drawTiledPixmap(int, int, int, int, const class QPixmap &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 346, column 17>
//   // proto:  void QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
if (false) {
  auto f = [](const QRect & arg1, qreal arg2, qreal arg3, Qt::SizeMode arg4) {
    ((QPainter*)0)->drawRoundedRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE drawRoundedRect(const class QRect &, qreal, qreal, Qt::SizeMode)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 435, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::GlobalColor c);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, Qt::GlobalColor arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE fillRect(int, int, int, int, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 424, column 17>
//   // proto:  void QPainter::drawTextItem(int x, int y, const QTextItem & ti);
if (false) {
  auto f = [](int arg1, int arg2, const QTextItem & arg3) {
    ((QPainter*)0)->drawTextItem(arg1, arg2, arg3);
  };
}
// _ZN8QPainter12drawTextItemEiiRK9QTextItem drawTextItem(int, int, const class QTextItem &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 385, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image, const QRect & sr, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](const QPoint & arg1, const QImage & arg2, const QRect & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPoint &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 364, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5, int arg6, int arg7, int arg8, int arg9) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
}
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii drawPixmap(int, int, int, int, const class QPixmap &, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 390, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image);
if (false) {
  auto f = [](const QPoint & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
  };
}
// _ZN8QPainter9drawImageERK6QPointRK6QImage drawImage(const class QPoint &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 336, column 17>
//   // proto:  void QPainter::drawPie(const QRect & , int a, int alen);
if (false) {
  auto f = [](const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawPie(arg1, arg2, arg3);
  };
}
// _ZN8QPainter7drawPieERK5QRectii drawPie(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 425, column 17>
//   // proto:  void QPainter::drawTextItem(const QPoint & p, const QTextItem & ti);
if (false) {
  auto f = [](const QPoint & arg1, const QTextItem & arg2) {
    ((QPainter*)0)->drawTextItem(arg1, arg2);
  };
}
// _ZN8QPainter12drawTextItemERK6QPointRK9QTextItem drawTextItem(const class QPoint &, const class QTextItem &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 358, column 17>
//   // proto:  void QPainter::drawPicture(int x, int y, const QPicture & picture);
if (false) {
  auto f = [](int arg1, int arg2, const QPicture & arg3) {
    ((QPainter*)0)->drawPicture(arg1, arg2, arg3);
  };
}
// _ZN8QPainter11drawPictureEiiRK8QPicture drawPicture(int, int, const class QPicture &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 257, column 17>
//   // proto:  void QPainter::translate(qreal dx, qreal dy);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QPainter*)0)->translate(arg1, arg2);
  };
}
// _ZN8QPainter9translateEdd translate(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 265, column 17>
//   // proto:  void QPainter::setViewport(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->setViewport(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter11setViewportEiiii setViewport(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 351, column 17>
//   // proto:  void QPainter::drawRoundRect(const QRect & r, int xround, int yround);
if (false) {
  auto f = [](const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawRoundRect(arg1, arg2, arg3);
  };
}
// _ZN8QPainter13drawRoundRectERK5QRectii drawRoundRect(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 280, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygonF & points);
if (false) {
  auto f = [](const QPolygonF & arg1) {
    ((QPainter*)0)->drawPoints(arg1);
  };
}
// _ZN8QPainter10drawPointsERK9QPolygonF drawPoints(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 402, column 17>
//   // proto:  void QPainter::drawStaticText(const QPoint & topLeftPosition, const QStaticText & staticText);
if (false) {
  auto f = [](const QPoint & arg1, const QStaticText & arg2) {
    ((QPainter*)0)->drawStaticText(arg1, arg2);
  };
}
// _ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText drawStaticText(const class QPoint &, const class QStaticText &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 428, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QBrush & );
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, const QBrush & arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter8fillRectEiiiiRK6QBrush fillRect(int, int, int, int, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 276, column 17>
//   // proto:  void QPainter::drawPoint(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QPainter*)0)->drawPoint(arg1);
  };
}
// _ZN8QPainter9drawPointERK6QPoint drawPoint(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 444, column 17>
//   // proto:  void QPainter::eraseRect(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->eraseRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter9eraseRectEiiii eraseRect(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 285, column 17>
//   // proto:  void QPainter::drawLine(const QLine & line);
if (false) {
  auto f = [](const QLine & arg1) {
    ((QPainter*)0)->drawLine(arg1);
  };
}
// _ZN8QPainter8drawLineERK5QLine drawLine(const class QLine &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 291, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLineF> & lines);
if (false) {
  auto f = [](const QVector<QLineF> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
  };
}
// _ZN8QPainter9drawLinesERK7QVectorI6QLineFE drawLines(const QVector<class QLineF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 368, column 17>
//   // proto:  void QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr);
if (false) {
  auto f = [](const QPointF & arg1, const QPixmap & arg2, const QRectF & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
  };
}
// _ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF drawPixmap(const class QPointF &, const class QPixmap &, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 312, column 17>
//   // proto:  void QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry);
if (false) {
  auto f = [](const QPointF & arg1, qreal arg2, qreal arg3) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3);
  };
}
// _ZN8QPainter11drawEllipseERK7QPointFdd drawEllipse(const class QPointF &, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 196, column 17>
//   // proto:  void QPainter::setBrushOrigin(const QPoint & );
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QPainter*)0)->setBrushOrigin(arg1);
  };
}
// _ZN8QPainter14setBrushOriginERK6QPoint setBrushOrigin(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 371, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm);
if (false) {
  auto f = [](const QPoint & arg1, const QPixmap & arg2) {
    ((QPainter*)0)->drawPixmap(arg1, arg2);
  };
}
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmap drawPixmap(const class QPoint &, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 286, column 17>
//   // proto:  void QPainter::drawLine(int x1, int y1, int x2, int y2);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawLine(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter8drawLineEiiii drawLine(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 277, column 17>
//   // proto:  void QPainter::drawPoint(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QPainter*)0)->drawPoint(arg1, arg2);
  };
}
// _ZN8QPainter9drawPointEii drawPoint(int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 363, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect);
if (false) {
  auto f = [](const QRect & arg1, const QPixmap & arg2, const QRect & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
  };
}
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_ drawPixmap(const class QRect &, const class QPixmap &, const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 297, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPoint> & pointPairs);
if (false) {
  auto f = [](const QVector<QPoint> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
  };
}
// _ZN8QPainter9drawLinesERK7QVectorI6QPointE drawLines(const QVector<class QPoint> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 323, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygon & polygon, Qt::FillRule fillRule);
if (false) {
  auto f = [](const QPolygon & arg1, Qt::FillRule arg2) {
    ((QPainter*)0)->drawPolygon(arg1, arg2);
  };
}
// _ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE drawPolygon(const class QPolygon &, Qt::FillRule)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 293, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPointF> & pointPairs);
if (false) {
  auto f = [](const QVector<QPointF> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
  };
}
// _ZN8QPainter9drawLinesERK7QVectorI7QPointFE drawLines(const QVector<class QPointF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 301, column 17>
//   // proto:  void QPainter::drawRect(const QRect & rect);
if (false) {
  auto f = [](const QRect & arg1) {
    ((QPainter*)0)->drawRect(arg1);
  };
}
// _ZN8QPainter8drawRectERK5QRect drawRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 211, column 17>
//   // proto:  void QPainter::setClipRect(int x, int y, int w, int h, Qt::ClipOperation op);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, Qt::ClipOperation arg5) {
    ((QPainter*)0)->setClipRect(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE setClipRect(int, int, int, int, Qt::ClipOperation)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 344, column 17>
//   // proto:  void QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, qreal arg5, qreal arg6, Qt::SizeMode arg7) {
    ((QPainter*)0)->drawRoundedRect(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 326, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygonF & polygon);
if (false) {
  auto f = [](const QPolygonF & arg1) {
    ((QPainter*)0)->drawConvexPolygon(arg1);
  };
}
// _ZN8QPainter17drawConvexPolygonERK9QPolygonF drawConvexPolygon(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 310, column 17>
//   // proto:  void QPainter::drawEllipse(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter11drawEllipseEiiii drawEllipse(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 328, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygon & polygon);
if (false) {
  auto f = [](const QPolygon & arg1) {
    ((QPainter*)0)->drawConvexPolygon(arg1);
  };
}
// _ZN8QPainter17drawConvexPolygonERK8QPolygon drawConvexPolygon(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 350, column 17>
//   // proto:  void QPainter::drawRoundRect(int x, int y, int w, int h, int , int );
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawRoundRect(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN8QPainter13drawRoundRectEiiiiii drawRoundRect(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 331, column 17>
//   // proto:  void QPainter::drawArc(const QRect & , int a, int alen);
if (false) {
  auto f = [](const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawArc(arg1, arg2, arg3);
  };
}
// _ZN8QPainter7drawArcERK5QRectii drawArc(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 413, column 17>
//   // proto:  void QPainter::drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, int arg5, const QString & arg6, QRect * arg7) {
    ((QPainter*)0)->drawText(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect drawText(int, int, int, int, int, const class QString &, class QRect *)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 445, column 17>
//   // proto:  void QPainter::eraseRect(const QRect & );
if (false) {
  auto f = [](const QRect & arg1) {
    ((QPainter*)0)->eraseRect(arg1);
  };
}
// _ZN8QPainter9eraseRectERK5QRect eraseRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 388, column 17>
//   // proto:  void QPainter::drawImage(const QRect & r, const QImage & image);
if (false) {
  auto f = [](const QRect & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
  };
}
// _ZN8QPainter9drawImageERK5QRectRK6QImage drawImage(const class QRect &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 440, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::BrushStyle style);
if (false) {
  auto f = [](const QRect & arg1, Qt::BrushStyle arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
  };
}
// _ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE fillRect(const class QRect &, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 275, column 17>
//   // proto:  void QPainter::drawPoint(const QPointF & pt);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QPainter*)0)->drawPoint(arg1);
  };
}
// _ZN8QPainter9drawPointERK7QPointF drawPoint(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 321, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygonF & polygon, Qt::FillRule fillRule);
if (false) {
  auto f = [](const QPolygonF & arg1, Qt::FillRule arg2) {
    ((QPainter*)0)->drawPolygon(arg1, arg2);
  };
}
// _ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE drawPolygon(const class QPolygonF &, Qt::FillRule)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 287, column 17>
//   // proto:  void QPainter::drawLine(const QPoint & p1, const QPoint & p2);
if (false) {
  auto f = [](const QPoint & arg1, const QPoint & arg2) {
    ((QPainter*)0)->drawLine(arg1, arg2);
  };
}
// _ZN8QPainter8drawLineERK6QPointS2_ drawLine(const class QPoint &, const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 406, column 17>
//   // proto:  void QPainter::drawText(const QPoint & p, const QString & s);
if (false) {
  auto f = [](const QPoint & arg1, const QString & arg2) {
    ((QPainter*)0)->drawText(arg1, arg2);
  };
}
// _ZN8QPainter8drawTextERK6QPointRK7QString drawText(const class QPoint &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 261, column 17>
//   // proto:  void QPainter::setWindow(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->setWindow(arg1, arg2, arg3, arg4);
  };
}
// _ZN8QPainter9setWindowEiiii setWindow(int, int, int, int)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

