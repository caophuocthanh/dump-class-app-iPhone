//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotation.h"

@class NSURL, PSPDFAction;

@interface PSPDFLinkAnnotation : PSPDFAnnotation
{
    unsigned char _linkType;
    BOOL _controlsEnabled;
    BOOL _autoplayEnabled;
    BOOL _loopEnabled;
    PSPDFAction *_action;
}

+ (id)keysForValuesToObserveForUndo;
+ (id)linkTypeJSONTransformer;
+ (id)propertyKeys;
+ (BOOL)isWriteable;
+ (id)supportedTypes;
@property(nonatomic, getter=isLoopEnabled) BOOL loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic, getter=isAutoplayEnabled) BOOL autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(nonatomic) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(retain, nonatomic) PSPDFAction *action; // @synthesize action=_action;
@property(nonatomic) unsigned char linkType; // @synthesize linkType=_linkType;
- (void).cxx_destruct;
- (void)setURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)URLAction;
- (void)updateLinkTypeForCurrentAction;
@property(readonly, nonatomic, getter=isMultimediaExtension) BOOL multimediaExtension;
@property(readonly, nonatomic) BOOL showAsLinkView;
- (id)targetString;
- (id)localizedDescription;
- (void)parse;
- (BOOL)isOverlay;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (BOOL)isEqualToAnnotation:(id)arg1;
- (id)description;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithLinkAnnotationType:(unsigned char)arg1;
- (id)init;

@end
