/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class WDAContent;

__attribute__((visibility("hidden")))
@interface WMOfficeArtMapper : CMDrawableMapper {
@private
	BOOL mFloating;	// 80 = 0x50
	BOOL mIsMapped;	// 81 = 0x51
	BOOL mIsInsideGroup;	// 82 = 0x52
	WDAContent *mContent;	// 84 = 0x54
	unsigned mCurrentPage;	// 88 = 0x58
}
@property(assign) BOOL isInsideGroup;	// G=0x31a9ff21; S=0x31a64725; converted property
- (id)initWithOadDrawable:(id)oadDrawable asFloating:(BOOL)floating origin:(CGPoint)origin parent:(id)parent;	// 0x319f0d9d
- (id)initWithWdOfficeArt:(id)wdOfficeArt parent:(id)parent;	// 0x319f0ccd
- (id)blipAtIndex:(unsigned)index;	// 0x319ffe6d
- (CGSize)expandedSizeForTextBox:(id)textBox withState:(id)state;	// 0x31a663c5
// converted property getter: - (BOOL)isInsideGroup;	// 0x31a9ff21
- (void)mapAt:(id)at withState:(id)state;	// 0x319f0f45
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x31a9ff41
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x31a64571
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x319ffec9
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x319f1a15
- (void)mapOfficeArtTextboxAt:(id)at withState:(id)state;	// 0x319f1f1d
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x31a8e7ed
- (void)setBoundingBox;	// 0x319f0ed5
- (void)setCurrentPage:(unsigned)page;	// 0x31a9ff31
// converted property setter: - (void)setIsInsideGroup:(BOOL)group;	// 0x31a64725
- (void)setWithClientData:(id)clientData state:(id)state;	// 0x319f1191
@end
