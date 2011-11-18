/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, PDPresentation, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
@private
	int mWidth;	// 8 = 0x8
	PDPresentation *mPresentation;	// 12 = 0xc
	NSMutableArray *mSlideNames;	// 16 = 0x10
	NSMutableArray *mSlideGuids;	// 20 = 0x14
	NSString *mResourceUrlPrefix;	// 24 = 0x18
	NSString *mResourceUrlProtocol;	// 28 = 0x1c
	CMArchiveManager *mArchiver;	// 32 = 0x20
	OIXMLDocument *mXhtmlDoc;	// 36 = 0x24
	OIXMLElement *mBodyElement;	// 40 = 0x28
	unsigned mNextCommit;	// 44 = 0x2c
	unsigned mCurrentSlide;	// 48 = 0x30
	BOOL mHasPushedFirstSlides;	// 52 = 0x34
	float mSlideOriginY;	// 56 = 0x38
}
- (id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;	// 0x30ca747d
- (void)_pushEmptySlideWithMessage:(id)message;	// 0x30ed9e3d
- (id)archiver;	// 0x30be64dd
- (id)blipAtIndex:(unsigned)index;	// 0x30ca8ad9
- (void)dealloc;	// 0x30c72bcd
- (id)documentTitle;	// 0x30ca7d15
- (void)finishMappingWithState:(id)state;	// 0x30c6dd11
- (void)mapDefaultCssStylesAt:(id)at;	// 0x30ca7e65
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x30c6be31
- (CGSize)pageSizeForDevice;	// 0x30c6e01d
- (void)setHtmlDocumentSizeInArchiver;	// 0x30c6df95
- (CGSize)slideSize;	// 0x30beaa11
- (void)startMappingWithState:(id)state;	// 0x30ca7791
@end

