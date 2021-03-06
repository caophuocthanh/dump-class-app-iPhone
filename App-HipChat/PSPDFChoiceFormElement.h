//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFFormElement.h"

#import "PSPDFChoiceFormElementJSExport.h"

@class NSArray, NSIndexSet, NSObject<NSCopying>, NSString;

@interface PSPDFChoiceFormElement : PSPDFFormElement <PSPDFChoiceFormElementJSExport>
{
    BOOL _customSelection;
    NSIndexSet *_selectedIndices;
    NSArray *_options;
    unsigned int _topIndex;
    NSString *_customText;
}

+ (id)keysForValuesToObserveForUndo;
+ (id)propertyKeys;
+ (id)parseIndexArray:(struct CGPDFDictionary *)arg1;
+ (id)parseOptArray:(struct CGPDFDictionary *)arg1;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) unsigned int topIndex; // @synthesize topIndex=_topIndex;
@property(nonatomic) BOOL customSelection; // @synthesize customSelection=_customSelection;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)appendIndexValuesPDFData:(id)arg1;
- (void)appendOptionValuesPDFData:(id)arg1;
- (void)appendFieldValuePDFData:(id)arg1;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (void)checkCustomIsntDefault;
- (void)resetWithAction:(id)arg1;
- (BOOL)isResetable;
- (float)autoFontSizingFudgeFactor;
- (struct UIEdgeInsets)edgeInsets;
- (struct CGAffineTransform)transformForDiscolureTriangleInBoundingBox;
- (struct CGPath *)createTrianglePathWithTransform:(struct CGAffineTransform *)arg1;
- (void)drawChoiceDisclosureTriangleInContext:(struct CGContext *)arg1;
- (void)drawSelectionHighlightInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawListBoxTextItem:(id)arg1 inContext:(struct CGContext *)arg2 atIndex:(unsigned int)arg3;
- (void)drawListBoxInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (id)choiceFieldChangedWithContents:(id)arg1 error:(id *)arg2;
- (id)itemNames;
- (id)selectedItemNames;
- (void)updateContentsWithSelectedStateAndNotify:(BOOL)arg1 validate:(BOOL)arg2;
- (id)optionExportValueAtIndex:(unsigned int)arg1;
- (id)optionTextAtIndex:(unsigned int)arg1;
- (void)parseValue:(struct CGPDFDictionary *)arg1;
- (id)formTypeName;
- (id)annotationIcon;
- (id)exportValue;
- (void)setContents:(id)arg1;
- (BOOL)isMultiSelect;
- (BOOL)isEdit;
- (BOOL)isCombo;
@property(copy, nonatomic) NSIndexSet *selectedIndices; // @synthesize selectedIndices=_selectedIndices;
- (id)description;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 documentRef:(struct CGPDFDocument *)arg2 parent:(id)arg3 fieldsAddressMap:(id)arg4 overrideDataSource:(id)arg5;
- (void)deleteItemAt:(id)arg1;
- (id)getItemAt:(int)arg1 exportValue:(id)arg2;
- (void)insertItemAt:(id)arg1 exportValue:(id)arg2 index:(id)arg3;
- (void)clearItems;
- (void)setItems:(id)arg1;
- (unsigned int)numItems;
@property(nonatomic) BOOL doNotSpellCheck;
@property(nonatomic) BOOL commitOnSelChange;
@property(nonatomic) BOOL multipleSelection;
@property(copy, nonatomic) NSObject<NSCopying> *currentValueIndices;
@property(readonly, copy, nonatomic) NSString *js_type;

@end

