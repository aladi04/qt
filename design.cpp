#include "design.h"

void applyDesign(Ui::MainWindow *ui)
{
    ui->iconOnlySidebar->hide();
    ui->home1->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);

    QList<QPushButton*> buttons = ui->iconOnlySidebar->findChildren<QPushButton*>();
    // Apply the stylesheet to each button
    for (QPushButton* button : buttons) {
        button->setStyleSheet("QPushButton:hover { background-color: #56657380; }");
    }

    QList<QPushButton*> buttons2 = ui->iconTextSidebar->findChildren<QPushButton*>();
    // Apply the stylesheet to each button
    for (QPushButton* button : buttons2) {
        button->setStyleSheet("QPushButton:hover { background-color: #56657380; }");
        button->setStyleSheet("QPushButton:checked {color: #fff}");
    }

    ui->acceuilBtn->setStyleSheet(
        "QPushButton {"
        "    background-color: #f0f0f0; /* Light gray background */"
        "    border: 2px solid #cccccc; /* Gray border */"
        "    color: #333333; /* Dark gray text */"
        "    padding: 12px 24px;"
        "    text-align: center;"
        "    text-decoration: none;"
        "    font-size: 12px;"
        "    font-weight: bold;"
        "    border-radius: 6px; /* Slightly rounded corners */"
        "    margin: 4px 2px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #e0e0e0; /* Slightly darker gray */"
        "    border: 2px solid #bbbbbb; /* Darker border */"
        "    color: #222222; /* Darker text */"
        "}"
        "QPushButton:pressed {"
        "    background-color: #d0d0d0; /* Even darker gray */"
        "    border: 2px solid #aaaaaa; /* Darker border */"
        "    color: #111111; /* Darker text */"
        "}"
        );

    ui->foncBtn->setStyleSheet(
        "QPushButton {"
        "    background-color: #f0f0f0; /* Light gray background */"
        "    border: 2px solid #cccccc; /* Gray border */"
        "    color: #333333; /* Dark gray text */"
        "    padding: 12px 24px;"
        "    text-align: center;"
        "    text-decoration: none;"
        "    font-size: 12px;"
        "    font-weight: bold;"
        "    border-radius: 6px; /* Slightly rounded corners */"
        "    margin: 4px 2px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #e0e0e0; /* Slightly darker gray */"
        "    border: 2px solid #bbbbbb; /* Darker border */"
        "    color: #222222; /* Darker text */"
        "}"
        "QPushButton:pressed {"
        "    background-color: #d0d0d0; /* Even darker gray */"
        "    border: 2px solid #aaaaaa; /* Darker border */"
        "    color: #111111; /* Darker text */"
        "}"
        );

    ui->pdf_input->setStyleSheet(
        "QPushButton {"
        "    background-color: #444;"
        "    color: white;"
        "    border-radius: 5px;"
        "    padding: 8px 15px;"
        "    font-size: 14px;"
        "    font-weight: bold;"
        "    border: none;"
        "}"
        "QPushButton:hover {"
        "    background-color: #555;" // Slightly lighter on hover
        "}"
        "QPushButton:pressed {"
        "    background-color: #333;" // Darker when clicked
        "}"
    );

    ui->valider_btn->setStyleSheet(
        "QPushButton {"
        "    background-color: #444;"
        "    color: white;"
        "    border-radius: 5px;"
        "    padding: 8px 15px;"
        "    font-size: 14px;"
        "    font-weight: bold;"
        "    border: none;"
        "}"
        "QPushButton:hover {"
        "    background-color: #555;" // Slightly lighter on hover
        "}"
        "QPushButton:pressed {"
        "    background-color: #333;" // Darker when clicked
        "}"
        );

    ui->tri_options->setStyleSheet(
        "QComboBox {"
        "    background-color: #444;"
        "    color: white;"
        "    border-radius: 5px;"
        "    padding: 5px;"
        "    font-size: 14px;"
        "    border: 1px solid #666;"
        "}"
        "QComboBox::drop-down {"
        "    border: none;"
        "    width: 20px;"
        "}"
        "QComboBox::down-arrow {"
        "    image: url(:/down.png);"
        "    width: 12px;"
        "    height: 12px;"
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: #555;"
        "    color: white;"
        "    border-radius: 5px;"
        "    selection-background-color: #666;"
        "    padding: 3px;"
        "}"
        );
}
