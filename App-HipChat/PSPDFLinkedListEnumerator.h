//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class PSPDFLinkedList;

@interface PSPDFLinkedListEnumerator : NSEnumerator
{
    PSPDFLinkedList *_linkedList;
    id <PSPDFLinkedListNode> _iterator;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithLinkedList:(id)arg1;

@end
