//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface NRMAClassDataContainer : NSObject <NSCopying>
{
    NSString *_name;
    Class _storedClass;
}

@property(readonly) Class storedClass; // @synthesize storedClass=_storedClass;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCls:(Class)arg1 className:(id)arg2;

@end

