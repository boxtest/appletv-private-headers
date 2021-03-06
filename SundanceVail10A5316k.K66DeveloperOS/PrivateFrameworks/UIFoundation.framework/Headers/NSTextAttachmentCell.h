/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSObject.h"


@protocol NSTextAttachmentCell <NSObject>
@property(retain) id attachment;	// converted property
// converted property getter: - (id)attachment;
- (CGPoint)cellBaselineOffset;
@optional
- (CGRect)cellFrameForTextContainer:(id)textContainer proposedLineFragment:(CGRect)fragment glyphPosition:(CGPoint)position characterIndex:(unsigned)index;
@required
- (CGSize)cellSize;
- (void)drawWithFrame:(CGRect)frame inView:(id)view characterIndex:(unsigned)index layoutManager:(id)manager;
// converted property setter: - (void)setAttachment:(id)attachment;
@end

