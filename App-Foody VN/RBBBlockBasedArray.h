//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface RBBBlockBasedArray : NSArray
{
    unsigned int _count;
    CDUnknownBlockType _block;
}

+ (id)arrayWithCount:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)init;
- (id)initWithCount:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;

@end
