//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCellNode.h"

@class ASTextNode, NSString;

@interface ASTextCellNode : ASCellNode
{
    NSString *_text;
    ASTextNode *_textNode;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (id)init;

@end
