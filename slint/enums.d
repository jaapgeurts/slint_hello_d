module slint.enums;

/// This enum describes the different types of buttons for a pointer event,
/// typically on a mouse or a pencil.
enum PointerEventButton : int {
    /// A button that is none of left, right, middle, back or forward. For example,
    /// this is used for the task button on a mouse with many buttons.
    Other,
    /// The left button.
    Left,
    /// The right button.
    Right,
    /// The center button.
    Middle,
    /// The back button.
    Back,
    /// The forward button.
    Forward,
}

/// This enum represents the different values for the `accessible-role` property, used to describe the
/// role of an element in the context of assistive technology such as screen readers.
enum AccessibleRole : int {
    /// The element isn't accessible.
    None,
    /// The element is a `Button` or behaves like one.
    Button,
    /// The element is a `CheckBox` or behaves like one.
    Checkbox,
    /// The element is a `ComboBox` or behaves like one.
    Combobox,
    /// The element is a `GroupBox` or behaves like one.
    Groupbox,
    /// The element is an `Image` or behaves like one. This is automatically applied to `Image` elements.
    Image,
    /// The element is a `ListView` or behaves like one.
    List,
    /// The element is a `Slider` or behaves like one.
    Slider,
    /// The element is a `SpinBox` or behaves like one.
    Spinbox,
    /// The element is a `Tab` or behaves like one.
    Tab,
    /// The element is similar to the tab bar in a `TabWidget`.
    TabList,
    /// The element is a container for tab content.
    TabPanel,
    /// The role for a `Text` element. This is automatically applied to `Text` elements.
    Text,
    /// The role for a `TableView` or behaves like one.
    Table,
    /// The role for a TreeView or behaves like one. (Not provided yet)
    Tree,
    /// The element is a `ProgressIndicator` or behaves like one.
    ProgressIndicator,
    /// The role for widget with editable text such as a `LineEdit` or a `TextEdit`.
    /// This is automatically applied to `TextInput` elements.
    TextInput,
    /// The element is a `Switch` or behaves like one.
    Switch,
    /// The element is an item in a `ListView`.
    ListItem,
}

/// This namespace contains constants for each special non-printable key.
///
/// Each constant can be converted to SharedString.
/// The constants are meant to be used with the slint::Window::dispatch_key_press_event() and
/// slint::Window::dispatch_key_release_event() functions.
///
/// Example:
/// ```
/// window.dispatch_key_press_event(slint::platform::key_codes::Tab);
/// ```

/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Backspace = "\u0008";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Tab = "\u0009";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Return = "\u000a";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Escape = "\u001b";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Backtab = "\u0019";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Delete = "\u007f";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Shift = "\u0010";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Control = "\u0011";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Alt = "\u0012";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum AltGr = "\u0013";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum CapsLock = "\u0014";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum ShiftR = "\u0015";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum ControlR = "\u0016";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Meta = "\u0017";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum MetaR = "\u0018";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Space = "\u0020";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum UpArrow = "\uf700";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum DownArrow = "\uf701";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum LeftArrow = "\uf702";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum RightArrow = "\uf703";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F1 = "\uf704";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F2 = "\uf705";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F3 = "\uf706";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F4 = "\uf707";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F5 = "\uf708";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F6 = "\uf709";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F7 = "\uf70a";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F8 = "\uf70b";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F9 = "\uf70c";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F10 = "\uf70d";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F11 = "\uf70e";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F12 = "\uf70f";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F13 = "\uf710";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F14 = "\uf711";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F15 = "\uf712";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F16 = "\uf713";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F17 = "\uf714";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F18 = "\uf715";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F19 = "\uf716";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F20 = "\uf717";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F21 = "\uf718";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F22 = "\uf719";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F23 = "\uf71a";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum F24 = "\uf71b";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Insert = "\uf727";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Home = "\uf729";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum End = "\uf72b";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum PageUp = "\uf72c";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum PageDown = "\uf72d";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum ScrollLock = "\uf72f";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Pause = "\uf730";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum SysReq = "\uf731";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Stop = "\uf734";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Menu = "\uf735";
/// A constant that represents the key code to be used in slint::Window::dispatch_key_press_event()
enum Back = "\uf748";
