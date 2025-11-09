#include "ftxui/component/component.hpp"  // for Button, Horizontal, Renderer, Dropdown, Horizontal, Vertical
#include "ftxui/component/component_base.hpp"      // for ComponentBase
#include "ftxui/component/screen_interactive.hpp"  // for ScreenInteractive
#include "ftxui/component/captured_mouse.hpp"      // for ftxui

int main() {
  using namespace ftxui;

  // Create a simple document with three text elements.
  Element document = hbox({
    text("left")   | border,
    text("middle") | border,
    text("right")  | border,
  });

  // Create a screen with full width and height fitting the document.
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Fit(document) // Height
  );

  // Render the document onto the screen.
  Render(screen, document);

  // Print the screen to the console.
  screen.Print();
}