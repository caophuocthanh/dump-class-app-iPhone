//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLOuterShadowedView.h"

@class CBLCinematicPinImageView, CBLPin, CBLPinCellBuilder, CBLPinCellDisplayOptions, CBLPinCellLayoutAttributes, NSDate, NSDictionary, NSUUID, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface CBLPinCellContentView : CBLOuterShadowedView
{
    BOOL _decodeImage;
    id <CBLPinCellContentViewDelegate> _delegate;
    CBLPinCellBuilder *_pinCellBuilder;
    UIView *_imageContainerView;
    CBLCinematicPinImageView *_pinImageView;
    UIImageView *_videoIconImageView;
    UILabel *_richPinTypeOverlay;
    CBLPin *_pin;
    CBLPinCellDisplayOptions *_displayOptions;
    CBLPinCellLayoutAttributes *_cellLayoutAttributes;
    UILongPressGestureRecognizer *_repinLongPressGesture;
    NSUUID *_imageDownloadUUID;
    NSDictionary *_viewsToRender;
    UIView *_imageBottomSeparator;
    NSDate *_imageLoadRequestTime;
}

+ (float)heightForAttributionForPin:(id)arg1 withDisplayOptions:(id)arg2 layoutAttributes:(id)arg3 viewClassesToRender:(id)arg4;
+ (float)heightForCountsForPin:(id)arg1 withDisplayOptions:(id)arg2 layoutAttributes:(id)arg3 viewClassesToRender:(id)arg4;
+ (float)heightForNonRichTopSectionForPin:(id)arg1 withDisplayOptions:(id)arg2 layoutAttributes:(id)arg3 viewClassesToRender:(id)arg4;
+ (float)heightForRichTopSectionForPin:(id)arg1 withDisplayOptions:(id)arg2 layoutAttributes:(id)arg3 viewClassesToRender:(id)arg4;
+ (float)totalHeightForPin:(id)arg1 withDisplayOptions:(id)arg2 andWidth:(float)arg3;
@property(retain, nonatomic) NSDate *imageLoadRequestTime; // @synthesize imageLoadRequestTime=_imageLoadRequestTime;
@property(retain, nonatomic) UIView *imageBottomSeparator; // @synthesize imageBottomSeparator=_imageBottomSeparator;
@property(retain, nonatomic) NSDictionary *viewsToRender; // @synthesize viewsToRender=_viewsToRender;
@property(retain, nonatomic) NSUUID *imageDownloadUUID; // @synthesize imageDownloadUUID=_imageDownloadUUID;
@property(nonatomic) BOOL decodeImage; // @synthesize decodeImage=_decodeImage;
@property(retain, nonatomic) UILongPressGestureRecognizer *repinLongPressGesture; // @synthesize repinLongPressGesture=_repinLongPressGesture;
@property(retain, nonatomic) CBLPinCellLayoutAttributes *cellLayoutAttributes; // @synthesize cellLayoutAttributes=_cellLayoutAttributes;
@property(retain, nonatomic) CBLPinCellDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) UILabel *richPinTypeOverlay; // @synthesize richPinTypeOverlay=_richPinTypeOverlay;
@property(retain, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) CBLCinematicPinImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) CBLPinCellBuilder *pinCellBuilder; // @synthesize pinCellBuilder=_pinCellBuilder;
@property(nonatomic) __weak id <CBLPinCellContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellLongPressed:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setPinImageWithImage:(id)arg1 completed:(BOOL)arg2 requestDuration:(double)arg3 cached:(BOOL)arg4;
- (void)loadImage;
- (void)setDisplayOptions:(id)arg1 forWidth:(float)arg2;
- (void)prepareForReuse;
- (void)cancelImageDownload;
- (void)configureRichPinTypeOverlay;
- (void)layoutGiraffePinView;
- (void)layoutRichPinTypeOverlay;
- (void)layoutGIFView;
- (float)layoutAttributionsWithStartingOriginY:(float)arg1;
- (float)layoutCountsWithStartingOriginY:(float)arg1;
- (float)layoutNonRichTopSectionWithStartingOriginY:(float)arg1;
- (float)layoutRichTopSectionWithStartingOriginY:(float)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

