//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFUndoProtocol.h"

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, NSString, PSPDFAnnotation, PSPDFUndoController, UIBezierPath, UIColor;

@interface PSPDFDrawAction : NSObject <PSPDFUndoProtocol>
{
    BOOL _naturalDrawingEnabled;
    BOOL _pointSequenceIsSubdivided;
    BOOL _shouldRasterizeLayer;
    BOOL _drawing;
    BOOL _erasing;
    unsigned int _annotationType;
    NSString *_annotationVariant;
    NSArray *_pointSequences;
    float _scale;
    PSPDFUndoController *_undoController;
    CALayer *_previewLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_fillLayer;
    PSPDFAnnotation *_annotation;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    float _lineWidth;
    int _lineEnd1;
    int _lineEnd2;
    NSArray *_dashArray;
    NSMutableArray *_currentPathPoints;
    UIBezierPath *_currentPathCache;
    CAShapeLayer *_controlPointLayer;
    CAShapeLayer *_controlPolygonLayer;
    struct CGAffineTransform _transform;
}

+ (id)keysForValuesToObserveForUndo;
+ (unsigned int)minimumNumberOfPointsForAnnotationType:(unsigned int)arg1;
@property(retain, nonatomic) CAShapeLayer *controlPolygonLayer; // @synthesize controlPolygonLayer=_controlPolygonLayer;
@property(retain, nonatomic) CAShapeLayer *controlPointLayer; // @synthesize controlPointLayer=_controlPointLayer;
@property(nonatomic, getter=isErasing) BOOL erasing; // @synthesize erasing=_erasing;
@property(nonatomic, getter=isDrawing) BOOL drawing; // @synthesize drawing=_drawing;
@property(nonatomic) BOOL shouldRasterizeLayer; // @synthesize shouldRasterizeLayer=_shouldRasterizeLayer;
@property(retain, nonatomic) UIBezierPath *currentPathCache; // @synthesize currentPathCache=_currentPathCache;
@property(retain, nonatomic) NSMutableArray *currentPathPoints; // @synthesize currentPathPoints=_currentPathPoints;
@property(nonatomic) BOOL pointSequenceIsSubdivided; // @synthesize pointSequenceIsSubdivided=_pointSequenceIsSubdivided;
@property(copy, nonatomic) NSArray *dashArray; // @synthesize dashArray=_dashArray;
@property(nonatomic) int lineEnd2; // @synthesize lineEnd2=_lineEnd2;
@property(nonatomic) int lineEnd1; // @synthesize lineEnd1=_lineEnd1;
@property(nonatomic) BOOL naturalDrawingEnabled; // @synthesize naturalDrawingEnabled=_naturalDrawingEnabled;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) PSPDFAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) CAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) PSPDFUndoController *undoController; // @synthesize undoController=_undoController;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(copy, nonatomic) NSArray *pointSequences; // @synthesize pointSequences=_pointSequences;
@property(readonly, nonatomic) NSString *annotationVariant; // @synthesize annotationVariant=_annotationVariant;
@property(nonatomic) unsigned int annotationType; // @synthesize annotationType=_annotationType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)performUndoAction:(id)arg1;
- (void)didUndoOrRedoChange:(id)arg1;
- (BOOL)isValid;
- (BOOL)writeChangesToAnnotation;
- (BOOL)canErase;
- (void)subdividePointSequencesIfNeeded;
- (void)eraseAt:(struct CGPoint)arg1 withRadius:(float)arg2;
- (void)endErase;
- (void)prepareForErase;
- (void)recalculate;
- (void)endDrawing;
- (void)continueDrawingAtPoint:(struct CGPoint)arg1;
- (void)startDrawingAtPoint:(struct CGPoint)arg1;
- (void)updateControlPoints;
- (void)setControlPointsVisible:(BOOL)arg1;
- (id)adjustDashArray:(id)arg1 forLineWidth:(float)arg2;
- (float)scaledLineWidth;
- (void)updateStrokeForLayers;
- (void)updateStrokeAndFillColorForLayers;
- (void)setFrame:(struct CGRect)arg1;
- (id)disableActionsDictionary;
- (id)setUpLayers;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1;
- (id)initWithType:(unsigned int)arg1 variant:(id)arg2 strokeColor:(id)arg3 fillColor:(id)arg4 lineWidth:(float)arg5 lineEnd1:(int)arg6 lineEnd2:(int)arg7 dashArray:(id)arg8 naturalDrawingEnabled:(BOOL)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
