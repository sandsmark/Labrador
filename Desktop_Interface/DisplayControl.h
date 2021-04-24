#pragma once

#include <QObject>

class QWheelEvent;
class QCustomPlot;

class DisplayControl : public QObject
{
    Q_OBJECT
public:

    double delay = 0;
    double window = 0.01;
    double y0 = 0;
    double y1 = 0;
    double x0 = 0;
    double x1 = 0;
    double topRange = 2.5;
    double botRange = -0.5;

    void setVoltageRange (QWheelEvent* event, bool isProperlyPaused, double maxWindowSize, QCustomPlot* axes);

signals:
    void topRangeUpdated(double);
    void botRangeUpdated(double);
    void timeWindowUpdated(double);
    void delayUpdated(double);
};
