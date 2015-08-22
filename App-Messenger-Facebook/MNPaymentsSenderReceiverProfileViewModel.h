//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface MNPaymentsSenderReceiverProfileViewModel : FBValueObject <NSCopying>
{
    NSString *_titleText;
    NSString *_displayNameText;
    NSURL *_profilePictureURL;
}

@property(readonly, copy, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, copy, nonatomic) NSString *displayNameText; // @synthesize displayNameText=_displayNameText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)initWithTitleText:(id)arg1 displayNameText:(id)arg2 profilePictureURL:(id)arg3;

@end
