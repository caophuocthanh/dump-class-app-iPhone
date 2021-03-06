//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RLMProperty : NSObject
{
    NSString *_objcRawType;
    BOOL _indexed;
    BOOL _objcType;
    BOOL _isPrimary;
    NSString *_name;
    int _type;
    NSString *_objectClassName;
    unsigned int _column;
    struct objc_ivar *_swiftListIvar;
    NSString *_getterName;
    NSString *_setterName;
    SEL _getterSel;
    SEL _setterSel;
}

@property(nonatomic) SEL setterSel; // @synthesize setterSel=_setterSel;
@property(nonatomic) SEL getterSel; // @synthesize getterSel=_getterSel;
@property(copy, nonatomic) NSString *setterName; // @synthesize setterName=_setterName;
@property(copy, nonatomic) NSString *getterName; // @synthesize getterName=_getterName;
@property(nonatomic) struct objc_ivar *swiftListIvar; // @synthesize swiftListIvar=_swiftListIvar;
@property(nonatomic) BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) BOOL objcType; // @synthesize objcType=_objcType;
@property(nonatomic) unsigned int column; // @synthesize column=_column;
@property(copy, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
@property(nonatomic) BOOL indexed; // @synthesize indexed=_indexed;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToProperty:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSwiftListPropertyWithName:(id)arg1 ivar:(struct objc_ivar *)arg2 objectClassName:(id)arg3;
- (id)initWithName:(id)arg1 indexed:(BOOL)arg2 property:(struct objc_property *)arg3;
- (id)initSwiftPropertyWithName:(id)arg1 indexed:(BOOL)arg2 property:(struct objc_property *)arg3 instance:(id)arg4;
- (_Bool)parseObjcProperty:(struct objc_property *)arg1;
- (BOOL)setTypeFromRawType;
- (void)setObjcCodeFromType;
- (void)updateAccessors;
- (id)initWithName:(id)arg1 type:(int)arg2 objectClassName:(id)arg3 indexed:(BOOL)arg4;

@end

