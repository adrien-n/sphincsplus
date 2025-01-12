/* SPDX-License-Identifier: (LicenseRef-SPHINCS-PLUS-Public-Domain OR CC0-1.0 OR 0BSD OR MIT-0) AND MIT
 * Copyright: TBD
 * */

#if !defined( SHAKE_OFFSETS_H_ )
#define SHAKE_OFFSETS_H_

/*
 * Offsets of various fields in the address structure when we use SHAKE as
 * the Sphincs+ hash function
 */

#define SPX_OFFSET_LAYER     3   /* The byte used to specify the Merkle tree layer */
#define SPX_OFFSET_TREE      8   /* The start of the 8 byte field used to specify the tree */
#define SPX_OFFSET_TYPE      19  /* The byte used to specify the hash type (reason) */
#define SPX_OFFSET_KP_ADDR   20  /* The start of the 4 byte field used to specify the key pair address */ 
#define SPX_OFFSET_CHAIN_ADDR 27  /* The byte used to specify the chain address (which Winternitz chain) */
#define SPX_OFFSET_HASH_ADDR 31  /* The byte used to specify the hash address (where in the Winternitz chain) */
#define SPX_OFFSET_TREE_HGT  27  /* The byte used to specify the height of this node in the FORS or Merkle tree */
#define SPX_OFFSET_TREE_INDEX 28 /* The start of the 4 byte field used to specify the node in the FORS or Merkle tree */

#define SPX_SHAKE 1

#endif /* SHAKE_OFFSETS_H_ */
