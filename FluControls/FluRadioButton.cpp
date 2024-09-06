#include "FluRadioButton.h"

FluRadioButton::FluRadioButton(QWidget* parent /*= nullptr*/) : QRadioButton(parent)
{
    FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButton.qss", this);
    connect(FluThemeUtils::getUtils(), &FluThemeUtils::themeChanged, this, [=](FluTheme theme) { onThemeChanged(); });
}

FluRadioButton::FluRadioButton(const QString& text, QWidget* parent /*= nullptr*/) : QRadioButton(text, parent)
{
    FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButton.qss", this);
    connect(FluThemeUtils::getUtils(), &FluThemeUtils::themeChanged, this, [=](FluTheme theme) { onThemeChanged(); });
}

void FluRadioButton::onThemeChanged()
{
    if (FluThemeUtils::isLightTheme())
    {
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButton.qss", this);
    }
    else
    {
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/dark/FluRadioButton.qss", this);
    }
}
