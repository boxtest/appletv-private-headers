/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"
#import "OfficeImport-Structs.h"

@class ODDStyleDefinition, ODDColorTransform, ODDNodePoint;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable {
@private
	ODDNodePoint *mDocumentPoint;	// 24 = 0x18
	ODDColorTransform *mColorTransform;	// 28 = 0x1c
	ODDStyleDefinition *mStyleDefinition;	// 32 = 0x20
}
@property(retain) id documentPoint;	// G=0x34d489e9; S=0x34d47891; converted property
- (id)init;	// 0x34d457a5
- (id)colorTransform;	// 0x34d45de9
- (void)dealloc;	// 0x34d4e425
// converted property getter: - (id)documentPoint;	// 0x34d489e9
// converted property setter: - (void)setDocumentPoint:(id)point;	// 0x34d47891
- (void)setParentTextListStyle:(id)style;	// 0x34d48635
- (id)styleDefinition;	// 0x34d45a6d
@end
