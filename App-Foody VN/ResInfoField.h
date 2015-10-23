//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Property.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface ResInfoField : Property <NSCoding>
{
    NSString *fieldType;
    NSArray *inputList;
}

@property(retain, nonatomic) NSArray *inputList; // @synthesize inputList;
@property(copy, nonatomic) NSString *fieldType; // @synthesize fieldType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFieldType:(id)arg1 inputList:(id)arg2 coder:(id)arg3;

@end
