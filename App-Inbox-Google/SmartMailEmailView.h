//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartMailLinkView.h"

@class NSString;

@interface SmartMailEmailView : SmartMailLinkView
{
    NSString *emailAddress_;
    NSString *_contactName;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;
- (void)linkButtonTapped:(id)arg1;
- (void)createSubviews;
@property(nonatomic) __weak id <JBTEmailAction> emailAction; // @dynamic emailAction;
- (void)prepareForReuse;

@end

