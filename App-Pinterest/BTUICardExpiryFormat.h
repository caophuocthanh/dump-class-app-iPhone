//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BTUICardExpiryFormat : NSObject
{
    BOOL _backspace;
    NSString *_value;
    unsigned int _cursorLocation;
}

@property(nonatomic) BOOL backspace; // @synthesize backspace=_backspace;
@property(nonatomic) unsigned int cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)formattedValue:(id *)arg1 cursorLocation:(unsigned int *)arg2;

@end

