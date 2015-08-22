//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL, UIImage;

@interface FBCompositionLinkShare : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isLinkURLOverridden;
    BOOL _isImageURLOverridden;
    BOOL _isTitleOverridden;
    BOOL _isShareDescriptionOverridden;
    BOOL _isCaptionOverridden;
    BOOL _forceDisplay;
    BOOL _isLoaded;
    BOOL _isEditable;
    BOOL _isDisabled;
    BOOL _hideSeparator;
    NSURL *_linkURL;
    NSString *_linkText;
    NSURL *_imageURL;
    UIImage *_image;
    NSString *_title;
    NSString *_shareDescription;
    NSString *_caption;
    NSString *_objectID;
    NSString *_shareableType;
}

@property(readonly, nonatomic) BOOL hideSeparator; // @synthesize hideSeparator=_hideSeparator;
@property(readonly, nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, copy, nonatomic) NSString *shareableType; // @synthesize shareableType=_shareableType;
@property(readonly, nonatomic) BOOL forceDisplay; // @synthesize forceDisplay=_forceDisplay;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) BOOL isCaptionOverridden; // @synthesize isCaptionOverridden=_isCaptionOverridden;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) BOOL isShareDescriptionOverridden; // @synthesize isShareDescriptionOverridden=_isShareDescriptionOverridden;
@property(readonly, copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(readonly, nonatomic) BOOL isTitleOverridden; // @synthesize isTitleOverridden=_isTitleOverridden;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) BOOL isImageURLOverridden; // @synthesize isImageURLOverridden=_isImageURLOverridden;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(readonly, nonatomic) BOOL isLinkURLOverridden; // @synthesize isLinkURLOverridden=_isLinkURLOverridden;
@property(readonly, copy, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
- (void).cxx_destruct;
- (id)initWithLinkURL:(id)arg1 isLinkURLOverridden:(BOOL)arg2 linkText:(id)arg3 imageURL:(id)arg4 isImageURLOverridden:(BOOL)arg5 image:(id)arg6 title:(id)arg7 isTitleOverridden:(BOOL)arg8 shareDescription:(id)arg9 isShareDescriptionOverridden:(BOOL)arg10 caption:(id)arg11 isCaptionOverridden:(BOOL)arg12 objectID:(id)arg13 forceDisplay:(BOOL)arg14 shareableType:(id)arg15 isLoaded:(BOOL)arg16 isEditable:(BOOL)arg17 isDisabled:(BOOL)arg18 hideSeparator:(BOOL)arg19;

@end
