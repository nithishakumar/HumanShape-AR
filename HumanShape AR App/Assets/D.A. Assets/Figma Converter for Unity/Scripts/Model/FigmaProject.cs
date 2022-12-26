using System.Collections.Generic;
using UnityEngine;

#if JSON_NET_EXISTS
using Newtonsoft.Json;
#endif

namespace DA_Assets.FCU.Model
{
    public struct FigmaProject
    {
#if JSON_NET_EXISTS
        [JsonProperty("document")]
#endif
        public FObject Document { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("name")]
#endif
        public string Name { get; set; }
    }
    public class FObject : FObjectExtra
    {
#if JSON_NET_EXISTS
        [JsonProperty("id")]
#endif
        public string Id { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("name")]
#endif
        public string Name { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("children")]
#endif
        public List<FObject> Children { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("backgroundColor")]
#endif
        public Color BackgroundColor { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("prototypeStartNodeID")]
#endif
        public object PrototypeStartNodeID { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("prototypeDevice")]
#endif
        public PrototypeDevice PrototypeDevice { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("blendMode")]
#endif
        public string BlendMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("absoluteBoundingBox")]
#endif
        public BoundingBox AbsoluteBoundingBox { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("absoluteRenderBounds")]
#endif
        public BoundingBox AbsoluteRenderBounds { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("preserveRatio")]
#endif
        public bool PreserveRatio { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("constraints")]
#endif
        public Constraints Constraints { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("relativeTransform")]
#endif
        public List<List<float>> RelativeTransform { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("size")]
#endif
        public Vector2 Size { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("fills")]
#endif
        public List<Fill> Fills { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("fillGeometry")]
#endif
        public List<Geometry> FillGeometry { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokes")]
#endif
        public List<Stroke> Strokes { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeWeight")]
#endif
        public float StrokeWeight { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeAlign")]
#endif
        public string StrokeAlign { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeGeometry")]
#endif
        public List<Geometry> StrokeGeometry { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("effects")]
#endif
        public List<Effect> Effects { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("arcData")]
#endif
        public ArcData ArcData { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("clipsContent")]
#endif
        public bool? ClipsContent { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("background")]
#endif
        public List<Background> Background { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("exportSettings")]
#endif
        public List<ExportSetting> ExportSettings { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("componentId")]
#endif
        public string ComponentId { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("cornerRadius")]
#endif
        public float CornerRadius { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("rectangleCornerRadii")]
#endif
        public List<float> RectangleCornerRadius { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("styles")]
#endif
        public Styles Styles { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("visible")]
#endif
        public bool? Visible { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("opacity")]
#endif
        public float? Opacity { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("layoutGrids")]
#endif
        public List<object> LayoutGrids { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("layoutMode")]
#endif
        public string LayoutMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("itemSpacing")]
#endif
        public float ItemSpacing { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("paddingLeft")]
#endif
        public float PaddingLeft { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("paddingRight")]
#endif
        public float PaddingRight { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("paddingTop")]
#endif
        public float PaddingTop { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("paddingBottom")]
#endif
        public float PaddingBottom { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("characters")]
#endif
        public string Characters { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("style")]
#endif
        public Style Style { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("characterStyleOverrides")]
#endif
        public List<object> CharacterStyleOverrides { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("styleOverrideTable")]
#endif
        public object StyleOverrideTable { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeCap")]
#endif
        public string StrokeCap { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeJoin")]
#endif
        public string StrokeJoin { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeDashes")]
#endif
        public List<float> StrokeDashes { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("strokeMiterAngle")]
#endif
        public float? StrokeMiterAngle { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("layoutAlign")]
#endif
        public string LayoutAlign { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("layoutGrow")]
#endif
        public float LayoutGrow { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("isMask")]
#endif
        public bool IsMask { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("counterAxisSizingMode")]
#endif
        public string CounterAxisSizingMode { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("primaryAxisSizingMode")]
#endif
        public string PrimaryAxisSizingMode { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("counterAxisAlignItems")]
#endif
        public string CounterAxisAlignItems { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("primaryAxisAlignItems")]
#endif
        public string PrimaryAxisAlignItems { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("overflowDirection")]
#endif
        public string OverflowDirection { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("layoutPositioning")]
#endif
        public string LayoutPositioning { get; set; }
    }
    public struct BoundingBox
    {

#if JSON_NET_EXISTS
        [JsonProperty("x")]
#endif
        public float? X { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("y")]
#endif
        public float? Y { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("width")]
#endif
        public float? Width { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("height")]
#endif
        public float? Height { get; set; }
    }
    public struct Constraints
    {

#if JSON_NET_EXISTS
        [JsonProperty("vertical")]
#endif
        public string Vertical { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("horizontal")]
#endif
        public string Horizontal { get; set; }
    }
    public struct GradientStop
    {

#if JSON_NET_EXISTS
        [JsonProperty("color")]
#endif
        public Color Color { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("position")]
#endif
        public float Position { get; set; }
    }
    public struct Fill
    {
#if JSON_NET_EXISTS
        [JsonProperty("blendMode")]
#endif
        public string BlendMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("opacity")]
#endif
        public float? Opacity { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("scaleMode")]
#endif
        public string ScaleMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("imageRef")]
#endif
        public string ImageRef { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("color")]
#endif
        public Color Color { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("visible")]
#endif
        public bool? Visible { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("gradientHandlePositions")]
#endif
        public List<Vector2> GradientHandlePositions { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("gradientStops")]
#endif
        public List<GradientStop> GradientStops { get; set; }
    }
    public struct Geometry
    {
#if JSON_NET_EXISTS
        [JsonProperty("path")]
#endif
        public string Path { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("windingRule")]
#endif
        public string WindingRule { get; set; }
    }
    public struct Effect
    {
#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("visible")]
#endif
        public bool? Visible { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("color")]
#endif
        public Color Color { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("blendMode")]
#endif
        public string BlendMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("offset")]
#endif
        public Vector2 Offset { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("radius")]
#endif
        public float Radius { get; set; }
    }
    public struct ArcData
    {
#if JSON_NET_EXISTS
        [JsonProperty("startingAngle")]
#endif
        public float StartingAngle { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("endingAngle")]
#endif
        public float EndingAngle { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("innerRadius")]
#endif
        public float InnerRadius { get; set; }
    }
    public struct Stroke
    {

#if JSON_NET_EXISTS
        [JsonProperty("blendMode")]
#endif
        public string BlendMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("color")]
#endif
        public Color Color { get; set; }
#if JSON_NET_EXISTS
        [JsonProperty("visible")]
#endif
        public bool? Visible { get; set; }
    }
    public struct Styles
    {
#if JSON_NET_EXISTS
        [JsonProperty("fill")]
#endif
        public string Fill { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("effect")]
#endif
        public string Effect { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("stroke")]
#endif
        public string Stroke { get; set; }
    }
    public struct Background
    {

#if JSON_NET_EXISTS
        [JsonProperty("blendMode")]
#endif
        public string BlendMode { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("visible")]
#endif
        public bool Visible { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("color")]
#endif
        public Color Color { get; set; }
    }
    public struct Style
    {

#if JSON_NET_EXISTS
        [JsonProperty("fontFamily")]
#endif
        public string FontFamily { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("fontPostScriptName")]
#endif
        public string FontPostScriptName { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("italic")]
#endif
        public bool Italic { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("fontWeight")]
#endif
        public int FontWeight { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("textAutoResize")]
#endif
        public string TextAutoResize { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("fontSize")]
#endif
        public float FontSize { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("textAlignHorizontal")]
#endif
        public string TextAlignHorizontal { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("textAlignVertical")]
#endif
        public string TextAlignVertical { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("letterSpacing")]
#endif
        public float LetterSpacing { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("lineHeightPx")]
#endif
        public float LineHeightPx { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("lineHeightPercent")]
#endif
        public float LineHeightPercent { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("lineHeightUnit")]
#endif
        public string LineHeightUnit { get; set; }
    }

    public struct Constraint
    {

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("value")]
#endif
        public float Value { get; set; }
    }
    public struct ExportSetting
    {

#if JSON_NET_EXISTS
        [JsonProperty("suffix")]
#endif
        public string Suffix { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("format")]
#endif
        public string Format { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("constraint")]
#endif
        public Constraint Constraint { get; set; }
    }
    public struct FigmaSize
    {

#if JSON_NET_EXISTS
        [JsonProperty("width")]
#endif
        public float Width { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("height")]
#endif
        public float Height { get; set; }
    }
    public struct PrototypeDevice
    {

#if JSON_NET_EXISTS
        [JsonProperty("type")]
#endif
        public string Type { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("size")]
#endif
        public FigmaSize Size { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("presetIdentifier")]
#endif
        public string PresetIdentifier { get; set; }

#if JSON_NET_EXISTS
        [JsonProperty("rotation")]
#endif
        public string Rotation { get; set; }
    }
}