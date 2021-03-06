//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMegaphoneButton, NSString, UIColor;

@interface IGGenericMegaphone : NSObject
{
    BOOL _dismissible;
    NSString *_type;
    NSString *_iconURL;
    UIColor *_backgroundColor;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_message;
    UIColor *_messageColor;
    IGMegaphoneButton *_buttonOne;
    IGMegaphoneButton *_buttonTwo;
}

+ (id)colorFromString:(id)arg1;
+ (id)megaphoneFromDictionary:(id)arg1;
@property(retain, nonatomic) IGMegaphoneButton *buttonTwo; // @synthesize buttonTwo=_buttonTwo;
@property(retain, nonatomic) IGMegaphoneButton *buttonOne; // @synthesize buttonOne=_buttonOne;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL dismissible; // @synthesize dismissible=_dismissible;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

