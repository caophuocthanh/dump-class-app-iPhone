//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray;

@interface THSegmentControl : UIControl
{
    NSMutableArray *_segments;
}

- (void).cxx_destruct;
- (int)indexOfSegment:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)_appendSegments:(id)arg1;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

