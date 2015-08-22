//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPinCellAttributionsView, CBLPinCellCountsView, CBLPinCellDescriptionView, CBLPinCellDisplayOptions, CBLPinCellDomainView, CBLPinCellGiraffePinExpandView, CBLPinCellImageAccessoryView, CBLPinCellLayoutAttributes, CBLPinCellRichDataView, NSArray;

@interface CBLPinCellBuilder : NSObject
{
    CBLPinCellDescriptionView *_descriptionView;
    CBLPinCellCountsView *_countsView;
    CBLPinCellAttributionsView *_attributionViews;
    CBLPinCellRichDataView *_sourceDataView;
    CBLPinCellDomainView *_domainView;
    CBLPinCellGiraffePinExpandView *_giraffePinView;
    CBLPinCellImageAccessoryView *_gifView;
    CBLPinCellLayoutAttributes *_layoutAttributes;
    CBLPinCellDisplayOptions *_displayOptions;
    NSArray *_possibleViews;
}

+ (float)getCroppedHeight:(id)arg1 withHeight:(float)arg2;
+ (id)viewsClassesToDisplayForPin:(id)arg1 displayOptions:(id)arg2 layoutAttributes:(id)arg3;
+ (id)possibleViews;
@property(retain, nonatomic) NSArray *possibleViews; // @synthesize possibleViews=_possibleViews;
@property(retain, nonatomic) CBLPinCellDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property(retain, nonatomic) CBLPinCellLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) CBLPinCellImageAccessoryView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) CBLPinCellGiraffePinExpandView *giraffePinView; // @synthesize giraffePinView=_giraffePinView;
@property(retain, nonatomic) CBLPinCellDomainView *domainView; // @synthesize domainView=_domainView;
@property(retain, nonatomic) CBLPinCellRichDataView *sourceDataView; // @synthesize sourceDataView=_sourceDataView;
@property(retain, nonatomic) CBLPinCellAttributionsView *attributionViews; // @synthesize attributionViews=_attributionViews;
@property(retain, nonatomic) CBLPinCellCountsView *countsView; // @synthesize countsView=_countsView;
@property(retain, nonatomic) CBLPinCellDescriptionView *descriptionView; // @synthesize descriptionView=_descriptionView;
- (void).cxx_destruct;
- (id)viewForClass:(Class)arg1;
- (id)configureViewsToDisplayForPin:(id)arg1 displayOptions:(id)arg2 layoutAttributes:(id)arg3;
- (void)prepareForReuse;
- (id)initWithView:(id)arg1 imageContainerView:(id)arg2;

@end
