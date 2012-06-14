/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPColorPalettizer : NSObject {
@private
	tagOctree *m_pTree;	// 4 = 0x4
	bool isDefaultPaletteSize;	// 8 = 0x8
}
- (id)initWitDefaultPaletteSize;	// 0x353f06f1
- (id)initWitMaxPaletteSize:(unsigned)size;	// 0x353eff35
- (bool)addNSColor:(id)color;	// 0x353f05e5
- (int)addPixelToOctree:(tagOctree *)octree pixel:(tagRgbQuad)pixel;	// 0x353f08dd
- (bool)addQuadColor:(tagRgbQuad)color;	// 0x353f0525
- (int)createNodeOctree:(tagOctreeNode **)octree parent:(tagOctreeNode *)parent;	// 0x353f08b5
- (int)createOctree:(tagOctree **)octree maxPaletteSize:(unsigned short)size;	// 0x353f0809
- (void)createPalette;	// 0x353f04ed
- (void)dealloc;	// 0x353f06a1
- (int)deleteListOctree:(tagLevelItem *)octree;	// 0x353f0ae1
- (int)deleteNodeOctree:(tagOctreeNode *)octree;	// 0x353f0a8d
- (int)deleteOctree:(tagOctree *)octree;	// 0x353f0a21
- (id)getPaletteData;	// 0x353f00f1
- (id)getPaletteDataRaw;	// 0x353f03dd
- (unsigned short)getPaletteFromOctree:(tagOctreeNode *)octree paletteEntry:(tagRgbQuad *)entry index:(unsigned short)index;	// 0x353f0759
- (id)getPngPaletteData;	// 0x353f0281
- (unsigned)paletteColorCount;	// 0x353efe71
- (int)paletteIndexFromNSColor:(id)nscolor;	// 0x353f003d
- (int)paletteIndexFromQuadColor:(tagRgbQuad)quadColor;	// 0x353effa1
- (int)reduceOctree:(tagOctree *)octree;	// 0x353f0b11
- (int)rgbToIndexOctree:(tagOctree *)indexOctree source:(tagRgbQuad)source destination:(char *)destination;	// 0x353efe9d
@end
