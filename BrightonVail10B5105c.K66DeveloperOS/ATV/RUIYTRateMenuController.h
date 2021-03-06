/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRSecureResource.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTRateMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource> {
	RUIYTMediaAsset *_origAsset;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	BOOL _itemPreviouslySelected;	// 112 = 0x70
}
- (id)initWithOriginalAsset:(id)originalAsset blurImage:(id)image;	// 0x275541
- (void).cxx_destruct;	// 0x275bb1
- (void)dealloc;	// 0x2757b1
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x275a1d
- (BOOL)isNetworkDependent;	// 0x275811
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x27593d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x275815
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x275939
- (id)secureResourceAuthenticator;	// 0x275b2d
@end

