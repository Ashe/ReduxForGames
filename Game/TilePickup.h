#ifndef TILEPICKUP_H
#define TILEPICKUP_H

#include "Tile.h"

class TilePickup : public Tile
{
public:
	TilePickup(Model* model, const TileType& type, int x, int y, float width, float pad, const glm::vec3& anch, int gridDim, bool isHidden = false, bool isTraverseable = false)
		:Tile(model, type, x, y, width, pad, anch, gridDim, isHidden, isTraverseable) {};

	void Initialise();// Mesh& tileMesh) override;
	void Render(float dTime, float zAdjust = 0, bool setInsteadOfAdd = false) override;

	// movement functions
	bool bump() override;
	void moveOn() override;
	void moveOff() override;

	bool getCollected() const;
	int getInfo() const override;

private:

	float spinAngle;
	bool isCollected;

	void collect();
};
#endif
