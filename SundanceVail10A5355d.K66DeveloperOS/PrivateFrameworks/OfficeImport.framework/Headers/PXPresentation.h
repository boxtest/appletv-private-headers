/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PXPresentation : NSObject {
}
+ (id)readFromPackage:(id)package fileName:(id)name reader:(id)reader cancel:(id)cancel isThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31cb70d9
+ (void)readPresentationProperties:(id)properties to:(id)to;	// 0x31cb807d
+ (CGSize)readSizeFromChildOfElement:(xmlNode *)element childName:(const char *)name;	// 0x31cb7fd9
+ (void)readSlideIndicesWithPresentationPart:(id)presentationPart presentationState:(id)state;	// 0x31cb8199
@end
