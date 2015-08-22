//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBStarRatingsDialogMetadataConfig : NSObject <NSCoding, NSCopying>
{
    BOOL _shouldShowImage;
    NSString *_title;
    NSString *_subtitle;
    NSString *_submitButton;
    NSString *_cancelButton;
}

@property(nonatomic) BOOL shouldShowImage; // @synthesize shouldShowImage=_shouldShowImage;
@property(readonly, copy, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) NSString *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 submitButton:(id)arg3 cancelButton:(id)arg4 shouldShowImage:(BOOL)arg5;

@end
